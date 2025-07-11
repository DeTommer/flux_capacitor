# Arduino Flux Capacitor Replica

This project uses an Arduino Pro Mini to drive 3 strings of WS2812 (NeoPixel) LEDs, creating a replica of the iconic flux capacitor from "Back to the Future".

## Features

- Drives 3 separate WS2812 LED strings
- Customizable animation patterns

## Hardware

- Arduino Pro Mini (5V)
- 3x WS2812 LED strips (number of LEDs per string configurable)
- Power supply (5V, sufficient current for all LEDs)
- Wires, resistors, capacitors as per WS2812 best practices

## Wiring

See `docs/wiring.png` for schematic.

## Usage

1. Wire the components as shown in the schematic.
2. Upload the code from `src/flux_capacitor.ino` to your Arduino Pro Mini.
3. Power up and enjoy your flux capacitor!

## License

MIT
