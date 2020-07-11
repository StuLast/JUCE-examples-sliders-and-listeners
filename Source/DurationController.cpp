/*
  ==============================================================================

    DurationController.cpp
    Created: 8 Jul 2020 1:54:12pm
    Author:  stuar

  ==============================================================================
*/

#include <JuceHeader.h>
#include "DurationController.h"

//==============================================================================
DurationController::DurationController()

{
    addAndMakeVisible(durationSlider);

    durationSlider.setRange(0.1, 5.0);
    durationSlider.setTextValueSuffix(" s");
    ////durationSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 150, 20);

    addAndMakeVisible(durationLabel);
    durationLabel.attachToComponent(&durationSlider, true);
    durationLabel.setText("Duration", juce::dontSendNotification);
    durationLabel.setJustificationType(juce::Justification::centredTop);
    durationLabel.setColour(juce::Label::textColourId, juce::Colours::yellowgreen);

}

DurationController::~DurationController()
{
}

void DurationController::paint (juce::Graphics& g)
{
    
}

void DurationController::resized()
{
    juce::Grid grid;

    using Track = juce::Grid::TrackInfo;
    using Fr = juce::Grid::Fr;

    grid.templateRows = { Track(Fr(1)), };
    grid.templateColumns = { Track(Fr(1)) };

    grid.items = { juce::GridItem(durationSlider) };

    grid.performLayout(getLocalBounds());

}
