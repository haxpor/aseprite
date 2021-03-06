// Aseprite
// Copyright (C) 2017  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifndef FILTERS_HUE_SATURATION_FILTER_H_INCLUDED
#define FILTERS_HUE_SATURATION_FILTER_H_INCLUDED
#pragma once

#include "filters/filter.h"

namespace filters {

  class HueSaturationFilter : public Filter {
  public:
    HueSaturationFilter();

    void setHue(double h);
    void setSaturation(double s);
    void setLightness(double v);

    // Filter implementation
    const char* getName();
    void applyToRgba(FilterManager* filterMgr);
    void applyToGrayscale(FilterManager* filterMgr);
    void applyToIndexed(FilterManager* filterMgr);

  private:
    double m_h, m_s, m_l;
  };

} // namespace filters

#endif
