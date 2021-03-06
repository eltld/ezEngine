#pragma once

#include <CoreUtils/Image/Formats/ImageFileFormat.h>

class EZ_COREUTILS_DLL ezBmpFileFormat : public ezImageFileFormatBase
{
public:
  virtual ezResult ReadImage(ezStreamReaderBase& stream, ezImage& image, ezLogInterface* pLog) const override;
  virtual ezResult WriteImage(ezStreamWriterBase& stream, const ezImage& image, ezLogInterface* pLog) const override;

  virtual bool CanReadFileType (const char* szExtension) const override;
  virtual bool CanWriteFileType(const char* szExtension) const override;
};
