#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class ExtentBorderRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ExtentBorderRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "ExtentBorderRenderer") {}
    public:
        void Sync(void* n, void* style) const { void* __callArgs[] = { n, style }; Call("Sync", __callArgs, 2); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
