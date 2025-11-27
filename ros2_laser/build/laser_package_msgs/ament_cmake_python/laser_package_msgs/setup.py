from setuptools import find_packages
from setuptools import setup

setup(
    name='laser_package_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('laser_package_msgs', 'laser_package_msgs.*')),
)
