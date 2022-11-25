#include <unordered_map>

namespace dc
{
namespace lock_free
{
template<typename Key_, typename Tp_>
class HashMap
{
public:
    Tp_& operator[] (const Key_& key)
    {
        return obj_[key];
    }
private:
    std::unordered_map<Key_, Tp_> obj_;
};
} // namespace lock_free

} // namespace dc
