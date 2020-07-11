/*
  ==============================================================================

    FrequencyController.cpp
    Created: 8 Jul 2020 1:39:49pm
    Author:  stuar

  ==============================================================================
*/

#include <JuceHeader.h>
#include "FrequencyController.h"

//==============================================================================
FrequencyController::FrequencyController()
{
    //setSize(600, 400);

    addAndMakeVisible(frequencySlider);
        
    frequencySlider.setRange(50, 5000);
    frequencySlider.setTextValueSuffix(" Hz");
    //frequencySlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 150, 20);

    addAndMakeVisible(frequencyLabel);
    frequencyLabel.attachToComponent(&frequencySlider, true);
    frequencyLabel.setText("Frequency", juce::dontSendNotification);
    frequencyLabel.setJustificationType(juce::Justification::centredTop);
    frequencyLabel.setColour(juce::Label::textColourId, juce::Colours::yellowgreen);
 }

FrequencyController::~FrequencyController()
{
}

void FrequencyController::paint(juce::Graphics& g)
{

}


void FrequencyController::resized()
{
    juce::Grid grid;

    using Track = juce::Grid::TrackInfo;
    using Fr = juce::Grid::Fr;

    grid.templateRows = { Track(Fr(1)) };
    grid.templateColumns = { Track(Fr(1)) };

    grid.items = { juce::GridItem(frequencySlider) };

    grid.performLayout(getLocalBounds());
}
