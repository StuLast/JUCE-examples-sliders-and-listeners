/*
  ==============================================================================

    FrequencyController.h
    Created: 8 Jul 2020 1:39:49pm
    Author:  stuar

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>


//==============================================================================
/*
*/
class FrequencyController  : public juce::Component
{
public:
    FrequencyController();
    ~FrequencyController() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider frequencySlider;
    juce::Label  frequencyLabel;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FrequencyController)
};
