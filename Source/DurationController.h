/*
  ==============================================================================

    DurationController.h
    Created: 8 Jul 2020 1:54:12pm
    Author:  stuar

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class DurationController  : public juce::Component
{
public:
    DurationController();
    ~DurationController() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider durationSlider;
    juce::Label durationLabel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DurationController)
};
