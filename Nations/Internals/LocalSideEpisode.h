#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalSideEpisode : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalSideEpisode(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalSideEpisode") {}
    public:
        int LeanIndex(int bystander) const { void* __callArgs[] = { &bystander }; return CallValue<int>("LeanIndex", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int attackerId() const { return ReadField<int>("attackerId"); }
        void attackerId(int value) const { WriteField<int>("attackerId", value); }
        int defenderId() const { return ReadField<int>("defenderId"); }
        void defenderId(int value) const { WriteField<int>("defenderId", value); }
        int startedTick() const { return ReadField<int>("startedTick"); }
        void startedTick(int value) const { WriteField<int>("startedTick", value); }
        int beats() const { return ReadField<int>("beats"); }
        void beats(int value) const { WriteField<int>("beats", value); }
        bool independence() const { return ReadField<bool>("independence"); }
        void independence(bool value) const { WriteField<bool>("independence", value); }
        int pleaTick() const { return ReadField<int>("pleaTick"); }
        void pleaTick(int value) const { WriteField<int>("pleaTick", value); }
        void* leans() const { return ReadField<void*>("leans"); }
    };
}
