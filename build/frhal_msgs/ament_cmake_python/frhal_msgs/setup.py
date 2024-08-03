from setuptools import find_packages
from setuptools import setup

setup(
    name='frhal_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('frhal_msgs', 'frhal_msgs.*')),
)
