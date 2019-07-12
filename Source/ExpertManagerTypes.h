#ifndef ExpertManagerTypesH
#define ExpertManagerTypesH

#include <Vcl.Graphics.hpp>
#include <Registry.hpp>
#include <memory>

/** A mapping for different implementation of registry ini files. **/
typedef TRegIniFile TRegistryINIFileCls;
/** A simplified type for a unique_ptr encapsulated TRegistryINIFileCls. **/
typedef std::unique_ptr<TRegistryINIFileCls> TUPIniFile;
/** A simplified type for a unique_ptr encapsulated TStringList. **/
typedef std::unique_ptr<TStringList> TUPStrList;

/** A record to hold our options so they can be passed tot he options dialogue. **/
struct TExpertOptions {
  TColor                                FNoneColour        = (TColor)clRed;
  TColor                                FOkayColour        = (TColor)clGreen;
  TColor                                FInvalidPathColour = (TColor)clGray;
  TColor                                FDuplicateColour   = (TColor)clMaroon;
  String                                FVCLTheme          = L"Windows";
};

#endif
