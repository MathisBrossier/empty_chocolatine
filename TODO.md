# MY_WORLD Project TODO List

### Setup
- [x] Initialize project repository
- [x] Set up project structure
- [x] Create Makefile with `re`, `clean`, and `fclean` rules

### Core Features
- [x] Implement map display
    - [x] Create wireframe map with square tiles
    - [x] Ensure all tiles are of the same size
- [ ] Implement map editing functionality
    - [x] Raise tiles
    - [x] Lower tiles
    - [ ] Tilt tiles

### User Interface
- [ ] Design user interface
    - [x] Create intuitive controls for map editing
    - [ ] Ensure pleasant user experience

### Additional Features
- [ ] Add save/load map feature
- [x] Implement different terrain textures

### Testing
- [ ] Write unit tests for core features
- [ ] Perform user testing for UI/UX feedback

### Documentation
- [ ] Write project documentation
    - [ ] Installation instructions
    - [ ] Usage guide
    - [ ] Contribution guidelines

### Final Steps
- [ ] Review and refactor code
- [ ] Final testing and bug fixing
- [ ] Prepare project presentation/demo

### Requirements

#### Mandatory
- [x] The window can be closed using events
- [x] The game manages the input from the mouse click and keyboard
- [x] Animations in your program are frame rate independent

#### Must
- [x] The map must be displayed using a 3D projection (whether isometric or parallel)
- [x] The map must have textures
- [x] The tiles must be selected using the mouse
- [x] At least 3 effects (including the modification of altitude) must be implemented and selectable with a toolbar in the window (reinitialization of the tiles  altitudes, modification of the size of the area of effect, etc)

#### Should
- [x] Your window should stick between 800x600 pixels and 1920x1080 pixels
- [ ] The size of the map should be selected using editable textboxes in the window
- [ ] Help boxes should appear as the mouse hovers elements in the toolbar(s)
- [ ] The buttons should have at least 3 visual states: idle, hover, and clicked
- [x] The map should have an additional layer (water, lava, etc.)
- [x] Tiles should have a texture
- [ ] The format of saved maps should be in a .legend file
- [x] Moving around on the map should be done with arrow keys
- [x] Zooming up and down should be done with keyboard and/or the mouse scrolling button

#### Could
- [ ] The program could save the map in a file at runtime using buttons and tools
- [ ] The program could load a map at runtime using buttons and tools
- [ ] The name of the saved files could be chosen at runtime
- [x] The camera could turn around any axis
- [ ] The layers could be animated
- [ ] Tools could be selected using keyboard shortcuts
- [ ] Sounds could be played on user actions
- [ ] Textures of the tiles could change depending on the direction of their slope
- [ ] Elements (e.g. buildings, roads) could be added on the map in compliance with the landforms
- [x] Water/lava areas could be added