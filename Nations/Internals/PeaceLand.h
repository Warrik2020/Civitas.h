#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceLand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceLand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceLand") {}
    public:
        void* Build(void* req, void* world) const { void* args[] = { req, world }; return CallStatic("Build", args, 2); }
        void Run() const { Call("Run", nullptr, 0); }
        bool IsBig(int tile) const { void* args[] = { &tile }; return CallValue<bool>("IsBig", args, 1); }
        int comp() const { return ReadField<int>("comp"); }
        void SetComp(int value) const { WriteField<int>("comp", value); }
        int size() const { return ReadField<int>("size"); }
        void SetSize(int value) const { WriteField<int>("size", value); }
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        int to() const { return ReadField<int>("to"); }
        void SetTo(int value) const { WriteField<int>("to", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
    };
}
