#ifndef SPIFLASH_H
#define SPIFLASH_H

#include <stdint.h>
#include <gmock/gmock.h>

const bool VERBOSE = true;

// template <typename T>
class SPIFlash
{
public:
  SPIFlash();
  ~SPIFlash();
  bool     begin(uint32_t _chipSize = 0);
  uint32_t getJEDECID();
  uint32_t getMaxPage(void);
  int32_t  readLong(uint16_t page_number, uint8_t offset);

  template <typename T> bool readAnything(uint16_t page_number, uint8_t offset, T& value) {
    // assert (p_SPIFlashMock != NULL);
    return true;
  }

  template <typename T> bool writeAnything(uint16_t page_number, uint8_t offset, const T& value) {
    // assert (p_SPIFlashMock != NULL);
    return true;
  }

  uint8_t  error(bool verbosity = false);
  bool     eraseChip(void);
  bool     powerDown(void);
  bool     powerUp(void);
  bool     eraseSector(uint16_t page_number, uint8_t offset);
};

// template <typename T>
class SPIFlashMock {
  public:
    MOCK_METHOD1(begin, bool(uint32_t _chipSize));
    MOCK_METHOD0(getJEDECID, uint32_t());
    MOCK_METHOD0(getMaxPage, uint32_t());
    MOCK_METHOD2(readLong, int32_t(uint16_t page_number, uint8_t offset));
    MOCK_METHOD1(error, uint8_t(bool verbosity));

    MOCK_METHOD0(eraseChip, bool());
    MOCK_METHOD0(powerDown, bool());
    MOCK_METHOD0(powerUp, bool());
    MOCK_METHOD2(eraseSector, bool(uint16_t page_number, uint8_t offset));

    // MOCK_METHOD3_T(readAnything, bool(uint16_t page_number, uint8_t offset, T& value));
    // MOCK_METHOD3_T(writeAnything, bool(uint16_t page_number, uint8_t offset, const T& value));
};

SPIFlashMock* spiFlashMockInstance();
void releaseSPIFlashMock();

#endif // SPIFLASH_H

