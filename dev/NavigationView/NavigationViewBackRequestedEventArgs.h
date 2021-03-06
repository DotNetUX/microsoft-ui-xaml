﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "NavigationViewBackRequestedEventArgs.g.h"

class NavigationViewBackRequestedEventArgs :
    public winrt::implementation::NavigationViewBackRequestedEventArgsT<NavigationViewBackRequestedEventArgs>
{
public:
    NavigationViewBackRequestedEventArgs();
};
