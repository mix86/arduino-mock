#include "arduino-mock/SPIFlash.h"

static SPIFlashMock* p_SPIFlashMock = NULL;

SPIFlashMock* spiFlashMockInstance() {
  if (!p_SPIFlashMock) {
    p_SPIFlashMock = new SPIFlashMock();
  }
  return p_SPIFlashMock;
}

void releaseSPIFlashMock() {
  assert (p_SPIFlashMock != NULL);
  if (p_SPIFlashMock) {
    delete p_SPIFlashMock;
    p_SPIFlashMock = NULL;
  }
}

SPIFlash::SPIFlash() {
}

SPIFlash::~SPIFlash() {
}

bool SPIFlash::begin(uint32_t _chipSize) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->begin(_chipSize);
}

uint32_t SPIFlash::getJEDECID() {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->getJEDECID();
}

uint32_t SPIFlash::getMaxPage(void) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->getMaxPage();
}

int32_t SPIFlash::readLong(uint16_t page_number, uint8_t offset) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->readLong(page_number, offset);
}

uint8_t SPIFlash::error(bool verbosity) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->error(verbosity);
}

bool SPIFlash::eraseChip(void) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->eraseChip();
}

bool SPIFlash::powerDown(void) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->powerDown();
}

bool SPIFlash::powerUp(void) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->powerUp();
}

bool SPIFlash::eraseSector(uint16_t page_number, uint8_t offset) {
  assert (p_SPIFlashMock != NULL);
  return p_SPIFlashMock->eraseSector(page_number, offset);
}

// bool SPIFlash::writeAnything(unsigned short page_number, unsigned char offset, const LogEntry& value) {
//   assert (p_SPIFlashMock != NULL);
//   // return p_SPIFlashMock->writeAnything(page_number, offset, value);
//   return true;
// }

// bool SPIFlash::readAnything(unsigned short page_number, unsigned char offset, LogEntry& value) {
//   assert (p_SPIFlashMock != NULL);
//   // return p_SPIFlashMock->readAnything(page_number, offset, value);
//   return true;
// }
