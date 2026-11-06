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
        bool TryResolve(const char* peopleName, void* familyChain, int& culture) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(peopleName ? peopleName : "") : nullptr; void* args[] = { managed_0, familyChain, &culture }; return CallStaticValue<bool>("TryResolve", args, 3); }
        void Rename(void* l, int culture, int ideology, int nationId) const { void* args[] = { l, &culture, &ideology, &nationId }; CallStatic("Rename", args, 4); }
        bool TryFor(void* identity, int origin, int& culture) const { void* args[] = { identity, &origin, &culture }; return CallStaticValue<bool>("TryFor", args, 3); }
        bool Active() const { return ReadStaticField<bool>("Active"); }
        void SetActive(bool value) const { WriteStaticField<bool>("Active", value); }
    };
}
