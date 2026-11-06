#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyNotice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyNotice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyNotice") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int tree() const { return ReadField<int>("tree"); }
        void SetTree(int value) const { WriteField<int>("tree", value); }
        int nation() const { return ReadField<int>("nation"); }
        void SetNation(int value) const { WriteField<int>("nation", value); }
        int other() const { return ReadField<int>("other"); }
        void SetOther(int value) const { WriteField<int>("other", value); }
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        int offer() const { return ReadField<int>("offer"); }
        void SetOffer(int value) const { WriteField<int>("offer", value); }
        void* ending() const { return ReadField<void*>("ending"); }
        void SetEnding(void* value) const { WriteField<void*>("ending", value); }
        int band() const { return ReadField<int>("band"); }
        void SetBand(int value) const { WriteField<int>("band", value); }
        int lord() const { return ReadField<int>("lord"); }
        void SetLord(int value) const { WriteField<int>("lord", value); }
    };
}
