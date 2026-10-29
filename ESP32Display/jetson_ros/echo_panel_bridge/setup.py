from setuptools import setup

package_name = "echo_panel_bridge"

setup(
    name=package_name,
    version="0.1.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="Echo robotics",
    maintainer_email="robotics@example.com",
    description="Read-only ROS 2 to USB telemetry bridge for the Echo ESP32 access panel.",
    license="MIT",
    entry_points={
        "console_scripts": [
            "panel_bridge = echo_panel_bridge.bridge_node:main",
        ],
    },
)

