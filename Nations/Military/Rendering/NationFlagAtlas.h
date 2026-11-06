#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class NationFlagAtlas : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationFlagAtlas(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "NationFlagAtlas") {}
    public:
        bool TryGetUv(int nationId, void* uv, bool& darkText) const { void* __callArgs[] = { &nationId, &uv, &darkText }; return CallStaticValue<bool>("TryGetUv", __callArgs, 3); }
        bool Ensure(void* militaries, void* nationOf) const { void* __callArgs[] = { militaries, nationOf }; return CallStaticValue<bool>("Ensure", __callArgs, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
    };
}
