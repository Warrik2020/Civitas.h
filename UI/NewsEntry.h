#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NewsEntry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NewsEntry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NewsEntry") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int nationA() const { return ReadField<int>("nationA"); }
        void SetNationA(int value) const { WriteField<int>("nationA", value); }
        int nationB() const { return ReadField<int>("nationB"); }
        void SetNationB(int value) const { WriteField<int>("nationB", value); }
        bool playerInvolved() const { return ReadField<bool>("playerInvolved"); }
        void SetPlayerInvolved(bool value) const { WriteField<bool>("playerInvolved", value); }
        void* date() const { return ReadField<void*>("date"); }
        void SetDate(void* value) const { WriteField<void*>("date", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* flavor() const { return ReadField<void*>("flavor"); }
        void SetFlavor(void* value) const { WriteField<void*>("flavor", value); }
    };
}
