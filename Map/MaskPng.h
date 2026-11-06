#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MaskPng : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MaskPng(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MaskPng") {}
    public:
        void* Encode(void* mask, int width, int height) const { void* __callArgs[] = { mask, &width, &height }; return CallStatic("Encode", __callArgs, 3); }
        void* EncodeRgba(void* rgba, int width, int height) const { void* __callArgs[] = { rgba, &width, &height }; return CallStatic("EncodeRgba", __callArgs, 3); }
    };
}
