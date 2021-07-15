/*
 *  IXSetThreadName.h
 *  Author: Benjamin Sergeant
 *  Copyright (c) 2018 Machine Zone, Inc. All rights reserved.
 */
#pragma once
#include <sys/prctl.h>
#include <string>

namespace ix
{
    void setThreadName(const std::string& name);
}
