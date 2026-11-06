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
        void id(int value) const { WriteField<int>("id", value); }
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int nationA() const { return ReadField<int>("nationA"); }
        void nationA(int value) const { WriteField<int>("nationA", value); }
        int nationB() const { return ReadField<int>("nationB"); }
        void nationB(int value) const { WriteField<int>("nationB", value); }
        bool playerInvolved() const { return ReadField<bool>("playerInvolved"); }
        void playerInvolved(bool value) const { WriteField<bool>("playerInvolved", value); }
        void* date() const { return ReadField<void*>("date"); }
        void date(void* value) const { WriteField<void*>("date", value); }
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        void* flavor() const { return ReadField<void*>("flavor"); }
        void flavor(void* value) const { WriteField<void*>("flavor", value); }
    };
}
