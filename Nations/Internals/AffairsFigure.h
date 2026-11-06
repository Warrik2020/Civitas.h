#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsFigure : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsFigure(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsFigure") {}
    public:
        bool HasTrait(const char* t) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(t ? t : "") : nullptr; void* args[] = { managed_0 }; return CallValue<bool>("HasTrait", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* role() const { return ReadField<void*>("role"); }
        void SetRole(void* value) const { WriteField<void*>("role", value); }
        void* given() const { return ReadField<void*>("given"); }
        void SetGiven(void* value) const { WriteField<void*>("given", value); }
        void* house() const { return ReadField<void*>("house"); }
        void SetHouse(void* value) const { WriteField<void*>("house", value); }
        bool female() const { return ReadField<bool>("female"); }
        void SetFemale(bool value) const { WriteField<bool>("female", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
        int status() const { return ReadField<int>("status"); }
        void SetStatus(int value) const { WriteField<int>("status", value); }
        int statusTick() const { return ReadField<int>("statusTick"); }
        void SetStatusTick(int value) const { WriteField<int>("statusTick", value); }
        int renown() const { return ReadField<int>("renown"); }
        void SetRenown(int value) const { WriteField<int>("renown", value); }
        int lastThread() const { return ReadField<int>("lastThread"); }
        void SetLastThread(int value) const { WriteField<int>("lastThread", value); }
        int threadCount() const { return ReadField<int>("threadCount"); }
        void SetThreadCount(int value) const { WriteField<int>("threadCount", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        void* traits() const { return ReadField<void*>("traits"); }
    };
}
