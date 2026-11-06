#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class PeopleCultures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleCultures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "PeopleCultures") {}
    public:
        bool TryResolve(const char* peopleName, void* familyChain, int& culture) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(peopleName ? peopleName : "") : nullptr; void* __callArgs[] = { managed_0, familyChain, &culture }; return CallStaticValue<bool>("TryResolve", __callArgs, 3); }
        void Rename(void* l, int culture, int ideology, int nationId) const { void* __callArgs[] = { l, &culture, &ideology, &nationId }; CallStatic("Rename", __callArgs, 4); }
        bool TryFor(void* identity, int origin, int& culture) const { void* __callArgs[] = { identity, &origin, &culture }; return CallStaticValue<bool>("TryFor", __callArgs, 3); }
        bool Active() const { return ReadStaticField<bool>("Active"); }
        void Active(bool value) const { WriteStaticField<bool>("Active", value); }
    };
}
