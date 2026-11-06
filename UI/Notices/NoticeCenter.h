#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Notices
{
    class NoticeCenter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NoticeCenter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Notices", "NoticeCenter") {}
    public:
        void* Newest(int i) const { void* args[] = { &i }; return CallStatic("Newest", args, 1); }
        void* Post(int topic, int tone, const char* text, int tile = -1, int nation = -1, void* open = nullptr, const char* key = nullptr, void* glyph = nullptr, void* act = nullptr, const char* actLabel = nullptr, bool worstWins = false, bool counted = true) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* managed_6 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_9 = Api() && Api()->NewString ? Api()->NewString(actLabel ? actLabel : "") : nullptr; void* args[] = { &topic, &tone, managed_2, &tile, &nation, open, managed_6, glyph, act, managed_9, &worstWins, &counted }; return CallStatic("Post", args, 12); }
        void MarkRead(void* n) const { void* args[] = { n }; CallStatic("MarkRead", args, 1); }
        void MarkAllRead() const { CallStatic("MarkAllRead", nullptr, 0); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Run(void* n) const { void* args[] = { n }; CallStatic("Run", args, 1); }
        void* GlyphOf(int t) const { void* args[] = { &t }; return CallStatic("GlyphOf", args, 1); }
        void* ToneColor(int t) const { void* args[] = { &t }; return CallStatic("ToneColor", args, 1); }
        int Capacity() const { return ReadStaticField<int>("Capacity"); }
    };
}
