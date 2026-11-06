#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class GloryTreaty : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GloryTreaty(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "GloryTreaty") {}
    public:
        void AddCarve(int nationId) const { void* args[] = { &nationId }; Call("AddCarve", args, 1); }
        int loserId() const { return ReadField<int>("loserId"); }
        void SetLoserId(int value) const { WriteField<int>("loserId", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void SetVictorId(int value) const { WriteField<int>("victorId", value); }
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        int preTiles() const { return ReadField<int>("preTiles"); }
        void SetPreTiles(int value) const { WriteField<int>("preTiles", value); }
        void* anchors() const { return ReadField<void*>("anchors"); }
        void* weights() const { return ReadField<void*>("weights"); }
        void* carved() const { return ReadField<void*>("carved"); }
    };
}
