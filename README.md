# ArcGIS CityEngine for Unreal Engine - Cognitive Cities Edition

## 🏙️ Distributed Architecture for Cognitive Cities

This repository extends [ArcGIS CityEngine for Unreal Engine](https://www.unrealengine.com/en-US/unreal-engine-5) to support the **distributed architecture of cognitive cities**. While maintaining full compatibility with the original CityEngine UE5 plugin for procedural building generation, this cognitive cities edition adds advanced capabilities for:

- **Distributed Urban Intelligence**: Neural networks for city-wide cognitive processing
- **Inter-Organizational Communication**: Protocols for cogpilot ↔ cogcities coordination  
- **Living Architecture**: Self-evolving urban systems with emergent behaviors
- **Cognitive Ecology**: Fractal organizational patterns for scalable city intelligence

### Original CityEngine Functionality

ArcGIS CityEngine for Unreal Engine is an [Unreal Engine 5](https://www.unrealengine.com/en-US/unreal-engine-5) (UE5) plugin which enables the use of ArcGIS CityEngine shape grammar rules in UE5 for the generation of procedural buildings. Therefore, game designers or artists do not have to leave UE5 to make use of CityEngine’s procedural modeling power. The buildings stay procedural all time and artists can change the height, style and appearance of buildings easily with a parametric interface. In addition, buildings can also be generated at runtime.

As input the plugin requires rule packages (RPK) which are authored in CityEngine. An RPK includes assets and a CGA rule file which encodes an architectural style. The download section below provides links to the several RPKs which can be used out-of-the-box.

The latest release is available in the [downloads section on GitHub](https://github.com/Esri/vitruvio/releases/latest). Please refer to the [installation guide](doc/installation.md) for installation instructions. Examples can be downloaded from [ArcGIS CityEngine for Unreal Engine page](https://esri.github.io/cityengine/vitruvio#examples).

![City generated using ArcGIS CityEngine for Unreal Engine](doc/img/vitruvio_paris.jpg)

## Documentation

-   [Installation](doc/installation.md)
-   [User Guide](doc/usage.md)
-   [Development Setup](doc/setup.md)

### Cognitive Cities Documentation

-   [🏗️ Architecture Overview](docs/cognitive-cities/architecture/overview.md)
-   [🌐 Distributed Systems Patterns](docs/cognitive-cities/patterns/distributed-systems.md)
-   [🧠 Neural Transport Protocols](docs/cognitive-cities/protocols/neural-transport.md)
-   [🔄 Inter-Organizational Communication](docs/cognitive-cities/protocols/inter-org-comm.md)
-   [📝 Copilot Note2Self Documentation](docs/cognitive-cities/note2self/README.md)

External documentation:

-   [CityEngine Tutorials](https://doc.arcgis.com/en/cityengine/latest/tutorials/introduction-to-the-cityengine-tutorials.htm)
-   [CityEngine CGA Reference](https://doc.arcgis.com/en/cityengine/latest/cga/cityengine-cga-introduction.htm)
-   [CityEngine Manual](https://doc.arcgis.com/en/cityengine/latest/help/cityengine-help-intro.htm)
-   [CityEngine SDK API Reference](https://esri.github.io/cityengine-sdk/html/index.html)

## Requirements

-   Windows 10
-   [Unreal Engine 5](https://www.unrealengine.com/en-US/unreal-engine-5)
-   Visual Studio (for development only)

## Issues

Find a bug or want to request a new feature? Please let us know by submitting an issue.

## Contributing

Esri welcomes contributions from anyone and everyone. Please see our [guidelines for contributing](https://github.com/esri/contributing).

## Licensing Information

CityEngine for Unreal Engine is free for personal, educational, and non-commercial use. Commercial use requires at least one commercial license of the latest CityEngine version installed in the organization. Redistribution or web service offerings are not allowed unless expressly permitted.

CityEngine for Unreal Engine is under the same license as the included [CityEngine SDK](https://github.com/Esri/esri-cityengine-sdk#licensing). An exception is the CityEngine for Unreal Engine source code (without CityEngine SDK, binaries, or object code), which is licensed under the Apache License, Version 2.0 (the “License”); you may not use this work except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0.

For questions or enquiries, please contact the Esri CityEngine team (cityengine-info@esri.com).
