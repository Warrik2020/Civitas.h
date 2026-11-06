#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DesignEdit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignEdit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DesignEdit") {}
    public:
        void* Pick(int ladder, int option) const { void* args[] = { &ladder, &option }; return CallStatic("Pick", args, 2); }
        void* Material(int part, int m) const { void* args[] = { &part, &m }; return CallStatic("Material", args, 2); }
        void* Add(int k) const { void* args[] = { &k }; return CallStatic("Add", args, 1); }
        bool ApplyTo(void* d, void* it, bool mirrorOn) const { void* args[] = { d, it, &mirrorOn }; return CallValue<bool>("ApplyTo", args, 3); }
        void* kind() const { return ReadField<void*>("kind"); }
        void SetKind(void* value) const { WriteField<void*>("kind", value); }
        int ladder() const { return ReadField<int>("ladder"); }
        void SetLadder(int value) const { WriteField<int>("ladder", value); }
        int option() const { return ReadField<int>("option"); }
        void SetOption(int value) const { WriteField<int>("option", value); }
        int part() const { return ReadField<int>("part"); }
        void SetPart(int value) const { WriteField<int>("part", value); }
        int material() const { return ReadField<int>("material"); }
        void SetMaterial(int value) const { WriteField<int>("material", value); }
        int partKind() const { return ReadField<int>("partKind"); }
        void SetPartKind(int value) const { WriteField<int>("partKind", value); }
    };
}
