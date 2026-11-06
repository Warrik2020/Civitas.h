#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NationCulture : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationCulture(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NationCulture") {}
    public:
        int Of(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("Of", __callArgs, 1); }
        int Of(int nationId, int people) const { void* __callArgs[] = { &nationId, &people }; return CallStaticValue<int>("Of", __callArgs, 2); }
        int Resolve(void* identity, int people, int mainPeople, void* leader) const { void* __callArgs[] = { identity, &people, &mainPeople, leader }; return CallStaticValue<int>("Resolve", __callArgs, 4); }
    };
}
