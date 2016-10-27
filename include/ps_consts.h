#ifndef PS_CONSTS_H
#define PS_CONSTS_H

#include <string>

const int kMaxWorkerThread = 32;

const int kWorkerCronInterval = 1000;
const int kDispatchCronInterval = 1000;

// FileSize = QPS * single_record_size * time
const int kFileSize = 10000 * 32 * 2 * 60;
const int kLoadCronInterval = 60; // seconds

//const std::string kLoggerPrefix = "csv";
const std::string kLoggerSuffix = ".csv";
const std::string kManifest = "manifest";

#endif
