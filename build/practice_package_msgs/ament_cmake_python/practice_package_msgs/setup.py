from setuptools import find_packages
from setuptools import setup

setup(
    name='practice_package_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('practice_package_msgs', 'practice_package_msgs.*')),
)
