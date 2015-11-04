
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_metadata_IIOMetadata__
#define __javax_imageio_metadata_IIOMetadata__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace metadata
      {
          class IIOMetadata;
          class IIOMetadataController;
          class IIOMetadataFormat;
          class IIOMetadataNode;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class javax::imageio::metadata::IIOMetadata : public ::java::lang::Object
{

public: // actually protected
  IIOMetadata();
  IIOMetadata(jboolean, ::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *);
public:
  virtual jboolean activateController();
  virtual ::javax::imageio::metadata::IIOMetadataController * getController();
  virtual ::javax::imageio::metadata::IIOMetadataController * getDefaultController();
  virtual JArray< ::java::lang::String * > * getExtraMetadataFormatNames();
  virtual ::javax::imageio::metadata::IIOMetadataFormat * getMetadataFormat(::java::lang::String *);
  virtual JArray< ::java::lang::String * > * getMetadataFormatNames();
  virtual ::java::lang::String * getNativeMetadataFormatName();
  virtual jboolean hasController();
  virtual jboolean isReadOnly() = 0;
  virtual jboolean isStandardMetadataFormatSupported();
  virtual void reset() = 0;
  virtual void setController(::javax::imageio::metadata::IIOMetadataController *);
  virtual ::org::w3c::dom::Node * getAsTree(::java::lang::String *) = 0;
public: // actually protected
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardChromaNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardCompressionNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardDataNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardDimensionNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardDocumentNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardTextNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardTileNode();
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardTransparencyNode();
private:
  void appendChild(::javax::imageio::metadata::IIOMetadataNode *, ::javax::imageio::metadata::IIOMetadataNode *);
public: // actually protected
  virtual ::javax::imageio::metadata::IIOMetadataNode * getStandardTree();
public:
  virtual void mergeTree(::java::lang::String *, ::org::w3c::dom::Node *) = 0;
  virtual void setFromTree(::java::lang::String *, ::org::w3c::dom::Node *);
public: // actually protected
  ::javax::imageio::metadata::IIOMetadataController * __attribute__((aligned(__alignof__( ::java::lang::Object)))) controller;
  ::javax::imageio::metadata::IIOMetadataController * defaultController;
  JArray< ::java::lang::String * > * extraMetadataFormatClassNames;
  JArray< ::java::lang::String * > * extraMetadataFormatNames;
  ::java::lang::String * nativeMetadataFormatClassName;
  ::java::lang::String * nativeMetadataFormatName;
  jboolean standardFormatSupported;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_metadata_IIOMetadata__