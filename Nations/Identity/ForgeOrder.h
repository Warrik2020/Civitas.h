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
        bool IsParent(int root) const { void* args[] = { &root }; return CallValue<bool>("IsParent", args, 1); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int forgedRoot() const { return ReadField<int>("forgedRoot"); }
        void SetForgedRoot(int value) const { WriteField<int>("forgedRoot", value); }
        void* parents() const { return ReadField<void*>("parents"); }
        int startedWorldTick() const { return ReadField<int>("startedWorldTick"); }
        void SetStartedWorldTick(int value) const { WriteField<int>("startedWorldTick", value); }
        float bestShare() const { return ReadField<float>("bestShare"); }
        void SetBestShare(float value) const { WriteField<float>("bestShare", value); }
        int bestWorldTick() const { return ReadField<int>("bestWorldTick"); }
        void SetBestWorldTick(int value) const { WriteField<int>("bestWorldTick", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        bool ai() const { return ReadField<bool>("ai"); }
        void SetAi(bool value) const { WriteField<bool>("ai", value); }
        bool stalled() const { return ReadField<bool>("stalled"); }
        void SetStalled(bool value) const { WriteField<bool>("stalled", value); }
    };
}
