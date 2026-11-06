#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationMaskImporter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationMaskImporter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationMaskImporter") {}
    public:
        void* ResampleMask(void* src, int srcW, int srcH, int gridW, int gridH) const { void* __callArgs[] = { src, &srcW, &srcH, &gridW, &gridH }; return CallStatic("ResampleMask", __callArgs, 5); }
        void* DownsampleMask(void* src, int srcW, int srcH, int gridW, int gridH, int f, void* background) const { void* __callArgs[] = { src, &srcW, &srcH, &gridW, &gridH, &f, background }; return CallStatic("DownsampleMask", __callArgs, 7); }
        void* Discover(void* mask, void* grid, void* background, int minPixelArea, int& skippedNoise, int& skippedOcean) const { void* __callArgs[] = { mask, grid, background, &minPixelArea, &skippedNoise, &skippedOcean }; return CallStatic("Discover", __callArgs, 6); }
    };
}
