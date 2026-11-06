#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class DesignPreview : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignPreview(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "DesignPreview") {}
    public:
        void* Png(void* d, int size) const { void* __callArgs[] = { d, &size }; return CallStatic("Png", __callArgs, 2); }
    };
}
