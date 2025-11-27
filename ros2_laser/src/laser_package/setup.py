from setuptools import find_packages, setup

package_name = 'laser_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='hyh',
    maintainer_email='[hanyh000@naver.com]',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'laser_node = laser_package.laser_node:main',
            'laser_pub = laser_package.laser_pub:main',
            'test = laser_package.test:main'
        ],
    },
)
