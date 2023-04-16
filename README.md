## suckless-builds

* My builds of some suckless software <br>
* All patches have been applied and tested properly <br>
* You only need to run <code>sudo make install</code> <br>
* Get base16 Xresources themes from [here](https://github.com/janoamaral/Xresources-themes)
<hr>

### st
#### patches applied
- alpha
  - clipboard
  - copy URL
  - open clipboard
- bold is not bright
- desktop entry
- wide glyph support
- scroll back
  - scrollback mouse altscreen
  - scrollback mouse increment
  - scrollback reflow
- w3m
- xresources signal reloading

![st](https://user-images.githubusercontent.com/107309764/232180205-62ea7a9c-f8f8-49d2-986c-a304aa9993e8.png)

<hr>

### dmenu
#### patches applied
- border
- center
- grid
- gridnav
- draculaesque colors applied manually 

![2023-04-16-074241_1280x800_scrot](https://user-images.githubusercontent.com/107309764/232266129-b69851bc-2d76-4751-ad7b-0165d1e7f201.png)

<hr>

### dwm
#### Versions
There are multiple builds of dwm available. Each build is slightly different than the others. Refer to the patches page of suckless website to find out more about each patch. 

- dwm
- dwm-center-pertag
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-dynamicscratchpads
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-Gruvbox
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-notitle
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-scratchpads
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-titlecolors
- dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-dynamicscratchpads-notitle

![2023-04-16-074201_1280x800_scrot](https://user-images.githubusercontent.com/107309764/232266110-71827f24-db04-43ab-bc42-8ac7ce33faca.png)
[Screenshot of dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-dynamicscratchpads-notitle plus Xresources mocha theme]()

![dwm-scr](https://user-images.githubusercontent.com/107309764/232183377-bd25a59c-faf3-4e21-9c7d-650bceeec170.png)
[Screenshot of dwm-center-pertag-attachbottombelow-focuseadjacent-fibo-vanitygaps-scratchpads]()

### KeyBindings
#### General Bindings
| SUPER | d                  | Dmenu                                       |
| SUPER | enter              | ST                                          |
| SUPER | b                  | Toggle Bar                                  |
| SUPER | j/k                | Change Focus                                |
| SUPER | i/p                | Inc/Dec Master                              |
| SUPER | h/l                | Resize                                      |
| SUPER | tab                | Switch Between Last Tags                    |
| SUPER | q                  | Kill                                        |
| SUPER | t                  | Tile                                        |
| SUPER | f                  | Floating                                    |
| SUPER | m                  | Monocole                                    |
| SUPER | r                  | Fibo                                        |
| SUPER | shift + r          | Dwindle                                     |
| SUPER | space              | Layout 0                                    |
| SUPER | shift + space      | Toggle Floating                             |
| SUPER | 0                  | View All Tags                               |
| SUPER | shift + 0          | Mark Current Window For To View On All Tags |
| ALT   | left/right         | View Left/Right                             |
| ALT   | shift + left/right | Tag To Left/Right                           |
| SUPER | 1..9               | Go To Tag                                   |
| SUPER | shift + w          | Firefox                                     |
| ALT   | shift + w          | Qutebrowser                                 |
| ALT   | f                  | Thunar                                      |

#### Gaps Bindings
| SUPER | ALT + h/l         | Inc Gaps Inner Gaps   |
| SUPER | shift + ALT + h/l | Incro Gaps Outter Gaps |
| SUPER | ALT + ctrl + h/l  | Incrigaps Gaps Between Tiles  |
| SUPER | y/o               | Incrihgaps  Gaps Stack     |
| SUPER | ctrl + y/o        | Incrivgaps  Gaps Master   |
| SUPER | ALT +y/o          | Incrohgaps  Gaps Vertical |
| SUPER | shift y/o         | Incrovgaps  Gaps Horizontal |
| SUPER | ALT + 0           | Toggle Gaps               |
| SUPER | ALT + shift + 0   | Default Gaps              |

#### Scratchpad Bindings
| SUPER | shift + minus     | Current Tab To Scratchpas |
| SUPER | minus             | Cycle Through Scratchpads |
| SUPER | x                 | Remove Scratchpad         |



