#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    addAndMakeVisible(controlPanel);
}

MainComponent::~MainComponent()
{
    
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (juce::Colours::antiquewhite);

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);
}

void MainComponent::resized()
{
    juce::Grid grid;

    using Track = juce::Grid::TrackInfo;
    using Fr = juce::Grid::Fr;

    //Setup grid with 2 rows and 1  column
    grid.templateRows = { Track(Fr(2)), Track(Fr(1)) };
    grid.templateColumns = { Track(Fr(1)) };

    //add items to grid
    grid.items = { juce::GridItem(), juce::GridItem(controlPanel) };

    //Render the grid as described above in the space provided by local bounds

    grid.performLayout(getLocalBounds());
}
