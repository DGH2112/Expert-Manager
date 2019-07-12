# Expert and Package Manager for Mutiple RAD Studio IDEs

Author:   David Hoyle

Version:  1.3

Date:     12 Jul 2019

Web Page: http://www.davidghoyle.co.uk/WordPress/?page_id=1361

## Overview

The purpose of this application is to provide a single location from which to manage Experts and Packages loaded into all version of RAD Studio, both main installations and alternate registry keys that are created by using the command line switch `-r` with `BDS.EXE`.

This application can be useful to all RAD Studio users but especially those who write IDE plug-ins and need to test them in custom registry keys.

## Use

The application, once loaded, is split into 2 main areas, a treeview of the RAD Studio installations from the registry on the left and a tabbed view of the entries for the selected treenode on the right. The tabbed area provides access to the selected RAD Studio installation's list of Experts, Known IDE Packages and Known Packages.

## Current Limitations

The tabbed veiw does not currently provide access to the sub-keys for C++ Builder and Delphi which are under the Known IDE Packages in the registry.

## Binaries

You can download a binary of this project if you don't want to compile it yourself from the web page above.

## Changes

Version 1.3

 * Fixed an issue with the context menus only working with the DLL Expert list;
 * Added VCL Theming to the application;
 * Added an options dialogue to allow the selection of VCL Theme and custom colouring.

Version 1.2c

 * Fixed issue with **Add Package** not being available.

Version 1.2b

 * Fixed a missing **Enable Experts** bug.

Version 1.2a

 * Fixed a bug with the  rendering of the parent treen odes of an installation;
 * Fixed an access violation when selecting parent nodes.

Version 1.2

 * Adds the ability to manage packages.

Version 1.1

 * Unknown.

Version 1.0

 * Initial release of the application .