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
        void* Pick(int ladder, int option) const { void* __callArgs[] = { &ladder, &option }; return CallStatic("Pick", __callArgs, 2); }
        void* Material(int part, int m) const { void* __callArgs[] = { &part, &m }; return CallStatic("Material", __callArgs, 2); }
        void* Add(int k) const { void* __callArgs[] = { &k }; return CallStatic("Add", __callArgs, 1); }
        bool ApplyTo(void* d, void* it, bool mirrorOn) const { void* __callArgs[] = { d, it, &mirrorOn }; return CallValue<bool>("ApplyTo", __callArgs, 3); }
        void* kind() const { return ReadField<void*>("kind"); }
        void kind(void* value) const { WriteField<void*>("kind", value); }
        int ladder() const { return ReadField<int>("ladder"); }
        void ladder(int value) const { WriteField<int>("ladder", value); }
        int option() const { return ReadField<int>("option"); }
        void option(int value) const { WriteField<int>("option", value); }
        int part() const { return ReadField<int>("part"); }
        void part(int value) const { WriteField<int>("part", value); }
        int material() const { return ReadField<int>("material"); }
        void material(int value) const { WriteField<int>("material", value); }
        int partKind() const { return ReadField<int>("partKind"); }
        void partKind(int value) const { WriteField<int>("partKind", value); }
    };
}
