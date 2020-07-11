/*
  ==============================================================================

    ControlsComponent.cpp
    Created: 8 Jul 2020 1:39:20pm
    Author:  stuar

  ==============================================================================
*/

#include <JuceHeader.h>
#include "ControlsComponent.h"

//==============================================================================
ControlsComponent::ControlsComponent()
{

    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(frequencyController);
    addAndMakeVisible(durationController);
}

ControlsComponent::~ControlsComponent()
{
}

void ControlsComponent::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll(juce::Colours::darkolivegreen);  // clear the background

    g.setColour (juce::Colours::greenyellow);
    g.setFont (20.0f);
    g.drawText("Controls Component", getLocalBounds(), juce::Justification::centredTop, true);
}

void ControlsComponent::resized()
{
    juce::Grid grid;

    using Track = juce::Grid::TrackInfo;
    using Fr = juce::Grid::Fr;

    //Setup grid with 1 row and 2 equally sized columns
    grid.templateRows = { Track(Fr(1)) };
    grid.templateColumns = { Track(Fr(1)), Track(Fr(1)) };

    //add items to grid
    grid.items = { juce::GridItem(frequencyController), juce::GridItem(durationController) };

    //Render the grid as described above in the space provided by local bounds

    grid.performLayout(getLocalBounds());

}
