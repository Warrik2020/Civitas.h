#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class ForgeOrder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ForgeOrder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "ForgeOrder") {}
    public:
        bool IsParent(int root) const { void* __callArgs[] = { &root }; return CallValue<bool>("IsParent", __callArgs, 1); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int forgedRoot() const { return ReadField<int>("forgedRoot"); }
        void forgedRoot(int value) const { WriteField<int>("forgedRoot", value); }
        void* parents() const { return ReadField<void*>("parents"); }
        int startedWorldTick() const { return ReadField<int>("startedWorldTick"); }
        void startedWorldTick(int value) const { WriteField<int>("startedWorldTick", value); }
        float bestShare() const { return ReadField<float>("bestShare"); }
        void bestShare(float value) const { WriteField<float>("bestShare", value); }
        int bestWorldTick() const { return ReadField<int>("bestWorldTick"); }
        void bestWorldTick(int value) const { WriteField<int>("bestWorldTick", value); }
        float share() const { return ReadField<float>("share"); }
        void share(float value) const { WriteField<float>("share", value); }
        bool ai() const { return ReadField<bool>("ai"); }
        void ai(bool value) const { WriteField<bool>("ai", value); }
        bool stalled() const { return ReadField<bool>("stalled"); }
        void stalled(bool value) const { WriteField<bool>("stalled", value); }
    };
}
