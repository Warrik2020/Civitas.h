#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class DivisionRenderMotion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionRenderMotion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "DivisionRenderMotion") {}
    public:
        bool Advance(void* militaries, void* cfg, float dt, bool resumed) const { void* __callArgs[] = { militaries, cfg, &dt, &resumed }; return CallStaticValue<bool>("Advance", __callArgs, 4); }
    };
}
