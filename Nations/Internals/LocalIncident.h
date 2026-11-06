#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalIncident : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalIncident(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalIncident") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int flags() const { return ReadField<int>("flags"); }
        void flags(int value) const { WriteField<int>("flags", value); }
        int actor() const { return ReadField<int>("actor"); }
        void actor(int value) const { WriteField<int>("actor", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void worldTick(int value) const { WriteField<int>("worldTick", value); }
    };
}
