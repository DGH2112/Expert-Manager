#ifndef ExpertManagerTypesH
#define ExpertManagerTypesH

#include <Registry.hpp>
#include <memory>

/** A mapping for different implementation of registry ini files. **/
typedef TRegIniFile TRegistryINIFileCls;
/** A simplified type for a unique_ptr encapsulated TRegistryINIFileCls. **/
typedef std::unique_ptr<TRegistryINIFileCls> TUPIniFile;
/** A simplified type for a unique_ptr encapsulated TStringList. **/
typedef std::unique_ptr<TStringList> TUPStrList;

#endif
