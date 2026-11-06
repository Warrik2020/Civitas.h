#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class RealmPeak : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RealmPeak(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "RealmPeak") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void SetWorldTick(int value) const { WriteField<int>("worldTick", value); }
        void* anchors() const { return ReadField<void*>("anchors"); }
        void* weights() const { return ReadField<void*>("weights"); }
    };
}
