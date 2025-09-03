# Installation

This page describes how to install and setup ArcGIS CityEngine for Unreal Engine.

## Download and Install

-   Download the MSI installer of the [latest ArcGIS CityEngine for Unreal Engine](https://github.com/Esri/vitruvio/releases/latest) version (alternatively the plugin can also be downloaded as a zip file and extracted directly into your Unreal Engine project). **Note** that the installer contains libraries which are used by the plugin and your browser might warn you not to download them. This warning can be ignored.

-   Follow the instructions of the installer.

## Plugin Activation

-   Create a new Unreal Engine project from the Epic Games launcher or open an existing project.

-   After opening the project a popup will notify you of the newly available CityEngine Plugin. Open **Manage Plugins...** (if the popup does not appear open **Edit** &rarr; **Plugins** instead)

    <img src="img/new_plugins.jpg" width="400">

-   Search for _CityEngine_ in the Plugin manager and enable the plugin (will require a restart).

    <img src="img/enable_vitruvio.jpg" width="600">

-   The CityEngine Plugin will be ready to use after Unreal has restarted. For further instructions on how to use the Plugin please refer to the [Usage Guide](usage.md).

## Cognitive Cities Enhancement (Optional)

### Prerequisites

The Cognitive Cities enhancement extends CityEngine with distributed intelligence capabilities for urban planning and coordination.

**Requirements:**
- Completed standard CityEngine installation (above)
- GitHub account for inter-organizational communication
- Python 3.8+ (for neural transport protocols)
- Network access for GitHub API communication

### Configuration Setup

1. **Copy the cognitive cities configuration**:
   ```bash
   cp cognitive-cities-config.json VitruvioHost/Config/
   ```

2. **Configure GitHub API access**:
   - Create a GitHub personal access token
   - Set environment variable: `GITHUB_TOKEN=your_token_here`
   - Configure organization relationships in `cognitive-cities-config.json`

3. **Enable cognitive enhancement features**:
   ```json
   {
     "cognitive_enhancement": {
       "enabled": true,
       "cityengine_integration": {
         "ai_optimization": true,
         "building_coordination": true
       }
     }
   }
   ```

### Verification

After installation, verify cognitive cities features:

1. **Check documentation access**:
   - Navigate to `docs/cognitive-cities/` directory
   - Review [Architecture Overview](../docs/cognitive-cities/architecture/overview.md)

2. **Test neural transport** (optional):
   ```python
   python -m cognitive_cities.transport.test_connection
   ```

3. **Validate coordination capabilities**:
   - Open UE5 project with cognitive cities enabled
   - Look for "Cognitive Cities" section in plugin settings
   - Verify inter-organizational communication channels

### Troubleshooting

**Common Issues:**

- **GitHub API rate limiting**: Configure exponential backoff in config
- **Network connectivity**: Ensure GitHub API access from development environment  
- **Plugin conflicts**: Cognitive cities enhancement should not affect standard CityEngine functionality

**Support:**
- Standard CityEngine issues: [Original repository issues](https://github.com/Esri/vitruvio/issues)
- Cognitive cities issues: [Cognitive cities documentation](../docs/cognitive-cities/note2self/README.md)

---

> **Note**: Cognitive Cities enhancement is experimental and designed for advanced urban planning scenarios. All standard CityEngine functionality remains unchanged and fully supported.
