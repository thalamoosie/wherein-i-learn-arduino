# Notes

I haven't studied any of this since like 2003, so here we go.

## Semiconducter Refresh - Intrinsic

- You can tailor the properties during manufacturing to be a good insulator or good conductor
- Depending on electrical signals, you can switch it between conducting and insulating
- Crystalline materials have allowed bands as well as forbidden bands referred to as the **Band Gap**
- When you have an electron in a semiconductor material it wants to go to the lowest energy levels, down to the _VALENCE BAND_ (the _CONDUCTION BAND_ is the upper band)
- Random lucky thermally generated electrons

## N-Type Semiconductor

- Impurity atoms have extra electron, easy for impurity atom to donate an electron to the Conduction Band ("DONOR ATOMS")
- No hole conduction because Valence Band remains full
- Hallmarked by Donor Impurities

## P-Type Semiconductor

- Can also have Immpurity Atoms with missing electrons at an energy level very close to the Valence Band ("ACCEPTOR TYPE IMPURITY")
- For each Acceptor Atom, it is going to accept an electron the Valence Band. When it grabs/steals the electron from the Valence Band, holes are left behind. The Conduction Band has no electrons to start with but as we apply voltage, holes roll uphill and electrons roll downhill
- Hallmarked by "Holes" and Acceptor Impurities

## The Diode

`---[ N ][ P ]---`
**Electron Hole Pair Recombinaton**

Electrons in N-type region (lower left)

`_(-)_(-)_/---`

Holes in P-type region (upper right)

`__/-( )-( )-`

Application of voltage lowers the 'step' between these, the wall

You cannot produce or consume energy, you can only transition it -therefore as the electron and hole recombine, it's emitted as a **_photon_** The increase in current is _exponential_ which means runaway, instability - aka burn the diode out. Therefore you must always put a current limiting resistor in series with the diode. 330 ohm is a good earmark but you can calculate the resistance also. Author's note: I don't remember how to do this it's been over 20 years gimme a break.

- Higher the frequency the lower the wavelength, this affects the color of the diode (related to Planck's Constant)
- If you put the voltage on backwards, you _increase_ the energy barrier, because it was hooked up backwards. LEDs work only in one direction.

Positive to P-Type `->` (Long Leg)

Negative to N-Type `|-` (Short Leg)
