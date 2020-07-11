/*
  ==============================================================================

    ControlsComponent.h
    Created: 8 Jul 2020 1:39:20pm
    Author:  stuar

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "FrequencyController.h"
#include "DurationController.h"

//==============================================================================
/*
*/
class ControlsComponent  : public juce::Component
{
public:
    ControlsComponent();
    ~ControlsComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:

    FrequencyController frequencyController;
    DurationController durationController;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlsComponent)
};
