from setuptools import find_packages, setup

package_name = 'practice_package'

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
            'practice_node = practice_package.practice_node:main',
            'pose_sub_and_pub = practice_package.pose_sub_and_pub:main'
        ],
    },
)
